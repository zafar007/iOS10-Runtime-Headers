/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery  {
    MFSMTPConnection *_connection;
}


- (void)_openConnection;
- (Class)deliveryClass;
- (id)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (id)newMessageWriter;
- (void)dealloc;

@end