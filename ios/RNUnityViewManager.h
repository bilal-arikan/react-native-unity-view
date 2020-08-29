#import "RCTViewManager.h"
#import "UnityFramework.h"
#import "UnityUtils.h"
#import "RNUnityView.h"

@interface RNUnityViewManager : RCTViewManager

@property (nonatomic, strong) RNUnityView *currentView;

@end
