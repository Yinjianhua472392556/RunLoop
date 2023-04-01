//
//  DWURunloopLazyLoad.h
//  RunLoopDemo
//
//  Created by 尹建华 on 2023/4/1.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef BOOL(^DWURunloopLazyLoadUnit)(void);

@interface DWURunloopLazyLoad : NSObject
@property (nonatomic, assign) NSUInteger maximumQueueLength;

+ (instancetype)sharedRunloopLazyLoad;

- (void)addTask:(DWURunloopLazyLoadUnit)unit withKey:(id)key;

- (void)removeAllTasks;

@end


@interface UITableViewCell (DWURunloopLazyLoad)

@property (nonatomic, strong) NSIndexPath *currentIndexPath;

@end

NS_ASSUME_NONNULL_END
