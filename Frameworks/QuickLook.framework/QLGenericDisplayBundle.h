/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLGenericView, NSError;

@interface QLGenericDisplayBundle : QLDisplayBundle <QLGenericViewDelegate> {
    QLGenericView *_airplayView;
    NSError *_error;
}

@property(retain) NSError * error;


- (void)_showLoadingProgress:(BOOL)arg1;
- (void)_loadPreviewItemInfos;
- (void)genericViewDidClickOnArchiveButton:(id)arg1;
- (void)discardAirPlayView;
- (void)setupAirPlayView;
- (id)airplayView;
- (void)loadWithHints:(id)arg1;
- (void)dealloc;
- (void)setError:(id)arg1;
- (id)error;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)loadView;

@end