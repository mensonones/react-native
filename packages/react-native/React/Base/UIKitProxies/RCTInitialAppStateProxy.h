/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RCTInitialAppStateProxy : NSObject

+ (instancetype)sharedInstance;

/*
 * Property to access initial application state.
 * Thread safe.
 */
@property (nonatomic, readonly) UIApplicationState initialAppState;

- (void)recordAppState;

@end

NS_ASSUME_NONNULL_END
