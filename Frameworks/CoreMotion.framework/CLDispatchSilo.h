/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class NSObject<OS_dispatch_queue>;

@interface CLDispatchSilo : CLSilo  {
    NSObject<OS_dispatch_queue> *_queue;
}


- (id)initMain;
- (id)initWithUnderlyingQueue:(id)arg1;
- (void)afterInterval:(double)arg1 async:(id)arg2;
- (void)async:(id)arg1;
- (id)newTimer;
- (void)assertOutside;
- (void)assertInside;
- (void)sync:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)queue;

@end