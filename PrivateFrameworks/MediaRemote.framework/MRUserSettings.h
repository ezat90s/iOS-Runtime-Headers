/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRUserSettings : NSObject {
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) double bluetoothDeviceResumeDuration;
@property (nonatomic, readonly) double broadcastCommandWaitDuration;
@property (nonatomic, readonly) BOOL hasTelevisionSocketQOSLevelSet;
@property (nonatomic, readonly) double televisionNowPlayingInfoArtworkCoalesceDuration;
@property (nonatomic, readonly) double televisionNowPlayingInfoCoalesceDuration;
@property (getter=isTelevisionPairingAllowed, nonatomic) BOOL televisionPairingAllowed;
@property (nonatomic, readonly) int televisionSocketQOSLevel;
@property (nonatomic, readonly) double televisionTimeoutDuration;
@property (nonatomic, readonly) BOOL useNoDelayOptionForTelevisionSockets;
@property (nonatomic, readonly) BOOL usePeerToPeerTelevisionConnections;

+ (id)currentSettings;

- (double)bluetoothDeviceResumeDuration;
- (double)broadcastCommandWaitDuration;
- (void)dealloc;
- (BOOL)hasTelevisionSocketQOSLevelSet;
- (id)init;
- (BOOL)isTelevisionPairingAllowed;
- (void)setTelevisionPairingAllowed:(BOOL)arg1;
- (double)televisionNowPlayingInfoArtworkCoalesceDuration;
- (double)televisionNowPlayingInfoCoalesceDuration;
- (int)televisionSocketQOSLevel;
- (double)televisionTimeoutDuration;
- (BOOL)useNoDelayOptionForTelevisionSockets;
- (BOOL)usePeerToPeerTelevisionConnections;

@end