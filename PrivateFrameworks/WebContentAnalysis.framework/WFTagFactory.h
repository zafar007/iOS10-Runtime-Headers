/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@class NSMutableDictionary;

@interface WFTagFactory : NSObject  {
    NSMutableDictionary *sharedTags;
}

+ (id)tagsForWebpage:(id)arg1;
+ (id)defaultFactory;

- (id)tagWithClass:(Class)arg1 webpage:(id)arg2;
- (id)init;
- (void)dealloc;

@end