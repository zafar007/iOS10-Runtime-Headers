/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAWeatherCondition : AceObject <SAAceSerializable> {
}

@property(copy) NSString * conditionCode;
@property long long conditionCodeIndex;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)conditionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)condition;

- (void)setConditionCodeIndex:(long long)arg1;
- (long long)conditionCodeIndex;
- (void)setConditionCode:(id)arg1;
- (id)conditionCode;
- (id)encodedClassName;
- (id)groupIdentifier;

@end