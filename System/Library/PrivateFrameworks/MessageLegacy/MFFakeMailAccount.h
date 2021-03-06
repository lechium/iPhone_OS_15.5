//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DeliveryAccount, MFIMAPConnection, NSRecursiveLock, NSURL;

@interface MFFakeMailAccount
{
    NSURL *_URL;	// 160 = 0xa0
    MFIMAPConnection *_cachedConnection;	// 168 = 0xa8
    NSRecursiveLock *_flagChangesLock;	// 176 = 0xb0
    _Bool _managed;	// 184 = 0xb8
    DeliveryAccount *_deliveryAccount;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000052d3e
@property(nonatomic, getter=isManaged) _Bool managed; // @synthesize managed=_managed;
@property(retain, nonatomic) DeliveryAccount *deliveryAccount; // @synthesize deliveryAccount=_deliveryAccount;
- (_Bool)_shouldConfigureMailboxCache;	// IMP=0x0000000000052cf1
- (_Bool)shouldFetchAgainWithError:(id)arg1 foregroundRequest:(_Bool)arg2;	// IMP=0x0000000000052bec
- (id)flagChangesLock;	// IMP=0x0000000000052bd7
- (id)flagChangesForMailboxPath:(id)arg1 UID:(unsigned int)arg2 connectTime:(double)arg3;	// IMP=0x0000000000052bcf
- (id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(int)arg3;	// IMP=0x0000000000052bba
- (void)setCachedConnection:(id)arg1;	// IMP=0x0000000000052b69
- (int)cachePolicy;	// IMP=0x0000000000052b61
- (unsigned int)minID;	// IMP=0x0000000000052b56
- (id)powerAssertionIdentifierWithPrefix:(id)arg1;	// IMP=0x0000000000052a67
- (id)uniqueId;	// IMP=0x0000000000052a5a
- (id)_nameForMailboxUid:(id)arg1;	// IMP=0x0000000000052a4d
- (id)description;	// IMP=0x0000000000052a40
- (id)debugDescription;	// IMP=0x0000000000052a33
- (id)_mailboxPathPrefix;	// IMP=0x0000000000052a26
- (id)displayName;	// IMP=0x0000000000052a19
- (id)username;	// IMP=0x00000000000529fc
- (id)hostname;	// IMP=0x00000000000529df
- (id)_URLScheme;	// IMP=0x00000000000529c2
- (void)didFinishActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 withResult:(id)arg3;	// IMP=0x00000000000529bc
- (_Bool)willPerformActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 result:(id *)arg3;	// IMP=0x00000000000529b4
- (void)setUnreadCount:(unsigned int)arg1 forMailbox:(id)arg2;	// IMP=0x00000000000529ae
- (id)URLString;	// IMP=0x0000000000052991
- (_Bool)supportsFastRemoteBodySearch;	// IMP=0x0000000000052989
- (_Bool)supportsRemoteAppend;	// IMP=0x0000000000052981
- (_Bool)isActive;	// IMP=0x0000000000052979
- (id)initWithURL:(id)arg1 rootMailboxUid:(id)arg2;	// IMP=0x00000000000528b3
- (id)initWithURL:(id)arg1;	// IMP=0x000000000005289f
- (id)init;	// IMP=0x000000000005283e

@end

