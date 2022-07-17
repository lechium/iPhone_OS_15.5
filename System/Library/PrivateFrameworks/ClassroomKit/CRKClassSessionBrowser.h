//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CATNetworkReachabilityDelegate-Protocol.h>
#import <ClassroomKit/CRKClassSessionBeaconBrowserDelegate-Protocol.h>
#import <ClassroomKit/CRKSessionDelegate-Protocol.h>

@class CATNetworkReachability, CRKClassSessionBeaconBrowser, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol CRKClassSessionBrowserDelegate, CRKInvitationSessionBrowserDelegate;

@interface CRKClassSessionBrowser : NSObject <CRKSessionDelegate, CRKClassSessionBeaconBrowserDelegate, CATNetworkReachabilityDelegate>
{
    NSMutableDictionary *mClassSessionsByIdentifier;	// 8 = 0x8
    NSMutableArray *mInRangeClassSessions;	// 16 = 0x10
    NSMutableDictionary *mInvitationSessionsByEndpoint;	// 24 = 0x18
    CRKClassSessionBeaconBrowser *mBeaconBrowser;	// 32 = 0x20
    CATNetworkReachability *mNetworkReachability;	// 40 = 0x28
    NSMutableDictionary *mConnectWithoutBeaconAssertionCountBySessionIdentifier;	// 48 = 0x30
    NSMutableDictionary *mConnectWithoutBeaconAssertionCountByInviteSessionEndpoint;	// 56 = 0x38
    _Bool _allowInvitationSessions;	// 64 = 0x40
    _Bool _allowUnenrolledSessions;	// 65 = 0x41
    id <CRKClassSessionBrowserDelegate> _delegate;	// 72 = 0x48
    id <CRKInvitationSessionBrowserDelegate> _invitationSessionDelegate;	// 80 = 0x50
    NSSet *_organizationUUIDs;	// 88 = 0x58
    NSSet *_enrolledControlGroupIdentifiers;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000b0dc4
@property(nonatomic) _Bool allowUnenrolledSessions; // @synthesize allowUnenrolledSessions=_allowUnenrolledSessions;
@property(nonatomic) _Bool allowInvitationSessions; // @synthesize allowInvitationSessions=_allowInvitationSessions;
@property(copy, nonatomic) NSSet *enrolledControlGroupIdentifiers; // @synthesize enrolledControlGroupIdentifiers=_enrolledControlGroupIdentifiers;
@property(copy, nonatomic) NSSet *organizationUUIDs; // @synthesize organizationUUIDs=_organizationUUIDs;
@property(nonatomic) __weak id <CRKInvitationSessionBrowserDelegate> invitationSessionDelegate; // @synthesize invitationSessionDelegate=_invitationSessionDelegate;
@property(nonatomic) __weak id <CRKClassSessionBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)delegateDidRemoveInvitationSession:(id)arg1;	// IMP=0x00000000000b0c83
- (void)delegateLostConnectionToInvitationSession:(id)arg1;	// IMP=0x00000000000b0bb6
- (void)delegateDidFindInvitationSession:(id)arg1 transport:(id)arg2;	// IMP=0x00000000000b09eb
- (id)delegateNeedsClientIdentityForInvitationSessionWithEndpoint:(id)arg1;	// IMP=0x00000000000b092c
- (void)delegateInRangeClassSessionsDidChange;	// IMP=0x00000000000b0868
- (void)delegateDidRemoveClassSession:(id)arg1;	// IMP=0x00000000000b0737
- (void)delegateLostConnectionToClassSession:(id)arg1;	// IMP=0x00000000000b068d
- (void)delegateDidFindClassSession:(id)arg1 transport:(id)arg2;	// IMP=0x00000000000b0542
- (void)delegateClassSessionDidBecomeNotConnectable:(id)arg1;	// IMP=0x00000000000b0464
- (void)delegateClassSessionDidBecomeConnectable:(id)arg1;	// IMP=0x00000000000b0386
- (id)delegateNeedsTrustedAnchorCertificatesForGroup:(id)arg1;	// IMP=0x00000000000b0252
- (id)delegateNeedsClientIdentityForGroup:(id)arg1;	// IMP=0x00000000000b0193
- (void)delegateDidFailWithError:(id)arg1;	// IMP=0x00000000000b00e9
- (void)updateConnectedSessions;	// IMP=0x00000000000afad4
- (id)browserStateDictionary;	// IMP=0x00000000000afabe
- (id)stateDictionariesByClassSessionIdentifierString;	// IMP=0x00000000000af6e7
- (void)updateRequiresBeaconFlagForSession:(id)arg1;	// IMP=0x00000000000af5f2
- (void)removeInRangeClassSession:(id)arg1;	// IMP=0x00000000000af589
- (void)addInRangeClassSession:(id)arg1;	// IMP=0x00000000000af520
- (void)reachabilityDidChange:(id)arg1;	// IMP=0x00000000000af0d2
- (void)beaconBrowser:(id)arg1 didFindBeaconForInvitationSessionWithEndpoint:(id)arg2;	// IMP=0x00000000000aee99
- (void)beaconBrowser:(id)arg1 didFindBeaconForClassSession:(id)arg2 flags:(unsigned short)arg3;	// IMP=0x00000000000aeb33
- (void)beaconBrowser:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000aeb1e
- (void)handleUntrustedClassSession:(id)arg1 decisionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000aea6a
- (void)handleUntrustedInvitationSession:(id)arg1 decisionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000aea1f
- (void)session:(id)arg1 encounteredUntrustedConnection:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ae979
- (void)sessionDidInvalidate:(id)arg1;	// IMP=0x00000000000ae872
- (void)sessionDidLoseBeacon:(id)arg1;	// IMP=0x00000000000ae65d
- (void)session:(id)arg1 willLoseBeaconAfterTimeInterval:(double)arg2;	// IMP=0x00000000000ae647
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x00000000000ae5ae
- (void)session:(id)arg1 didConnectWithTransport:(id)arg2;	// IMP=0x00000000000ae4ea
- (void)sessionDidBecomeNotConnectable:(id)arg1;	// IMP=0x00000000000ae499
- (void)sessionDidBecomeConnectable:(id)arg1;	// IMP=0x00000000000ae412
- (id)trustedAnchorCertificatesForSession:(id)arg1;	// IMP=0x00000000000ae350
- (id)clientIdentityForSession:(id)arg1;	// IMP=0x00000000000ae24d
@property(readonly, copy, nonatomic) NSSet *inRangeClassSessionIdentifiers;
@property(readonly, nonatomic, getter=isBrowsing) _Bool browsing;
- (void)stopBrowsing;	// IMP=0x00000000000ae185
- (void)startBrowsing;	// IMP=0x00000000000ae16f
- (void)releaseConnectWithoutBeaconAssertionForInvitationSessionWithEndpoint:(id)arg1;	// IMP=0x00000000000adfcf
- (void)acquireConnectWithoutBeaconAssertionForInvitationSessionWithEndpoint:(id)arg1;	// IMP=0x00000000000ade45
- (void)releaseConnectWithoutBeaconAssertionForSessionIdentifier:(id)arg1;	// IMP=0x00000000000adca5
- (void)acquireConnectWithoutBeaconAssertionForSessionIdentifier:(id)arg1;	// IMP=0x00000000000adb1b
- (void)lostConnectionToInvitationSessionWithEndpoint:(id)arg1;	// IMP=0x00000000000ada0d
- (void)invitationSessionWithEndpointInvalidated:(id)arg1;	// IMP=0x00000000000ad8ee
- (_Bool)hasConnectionToClassWithIdentifier:(id)arg1;	// IMP=0x00000000000ad77e
- (void)lostConnectionToClassSession:(id)arg1;	// IMP=0x00000000000ad670
- (void)classSessionRejected:(id)arg1;	// IMP=0x00000000000ad562
- (void)classSessionInvalidated:(id)arg1;	// IMP=0x00000000000ad454
- (void)connectToClassSessionWithIdentifier:(id)arg1;	// IMP=0x00000000000ad413
- (id)init;	// IMP=0x00000000000ace1c
- (void)dealloc;	// IMP=0x00000000000acd85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
