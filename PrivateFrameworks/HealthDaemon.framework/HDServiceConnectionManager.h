/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDServiceConnectionManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    bool  _BTLEEnabled;
    NSMutableDictionary * _activeServices;
    bool  _connecting;
    HDDaemon * _daemon;
    NSObject<OS_dispatch_queue> * _deviceQueue;
}

@property (nonatomic) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_transactionName:(id)arg1;

- (void).cxx_destruct;
- (void)_connectToService:(id)arg1;
- (void)_connectToServices;
- (void)_disconnectFromService:(id)arg1;
- (void)_disconnectFromServices;
- (void)_handleBluetoothUpdates:(long long)arg1;
- (void)_subscribeBluetoothStateUpdates;
- (void)connectToService:(id)arg1;
- (id)daemon;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)disconnectFromService:(id)arg1;
- (void)disconnectFromServices;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (void)reconnectToServices;
- (void)setDaemon:(id)arg1;

@end