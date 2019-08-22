#import "AppDelegate.h"
#import "FreshchatSDK/FreshchatSDK.h"
@import UserNotifications;

@interface AppDelegate (FirebasePlugin)
@property (nonatomic, strong) NSNumber * _Nonnull applicationInBackground;
@property (NS_NONATOMIC_IOSONLY, nullable, weak) id <UNUserNotificationCenterDelegate> delegate;
@end
