/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, NSDictionary;

@interface IMUserNotification : NSObject  {
    id _reserved;
}

@property(readonly) id identifier;
@property(readonly) double timeout;
@property(readonly) unsigned int displayFlags;
@property(readonly) NSDictionary * displayInformation;
@property BOOL showInLockScreen;
@property BOOL usesNotificationCenter;
@property(retain) NSString * representedApplicationBundle;
@property(readonly) unsigned int response;
@property(readonly) unsigned int responseFlags;
@property(readonly) NSDictionary * responseInformation;
@property(retain) NSDictionary * userInfo;

+ (id)userNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 alternateButton:(id)arg5 otherButton:(id)arg6;
+ (id)userNotificationWithIdentifier:(id)arg1 timeout:(double)arg2 alertLevel:(unsigned int)arg3 displayFlags:(unsigned int)arg4 displayInformation:(id)arg5;

- (void)_setResponseFlags:(unsigned int)arg1 responseInformation:(id)arg2;
- (id)responseInformation;
- (void)setUsesNotificationCenter:(BOOL)arg1;
- (BOOL)usesNotificationCenter;
- (void)setShowInLockScreen:(BOOL)arg1;
- (BOOL)showInLockScreen;
- (void)setRepresentedApplicationBundle:(id)arg1;
- (id)representedApplicationBundle;
- (unsigned int)displayFlags;
- (id)displayInformation;
- (unsigned int)responseFlags;
- (id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 displayFlags:(unsigned int)arg3 displayInformation:(id)arg4;
- (double)timeout;
- (id)userInfo;
- (void)dealloc;
- (id)identifier;
- (unsigned int)response;
- (void)setUserInfo:(id)arg1;

@end