//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class EMRemoteConnection, NSString;

@interface EMSearchableIndex : NSObject <EFLoggable>
{
    EMRemoteConnection *_connection;	// 8 = 0x8
}

+ (id)attachmentPersistentIDFromItemIdentifier:(id)arg1;	// IMP=0x00000000000720b3
+ (id)remoteInterface;	// IMP=0x0000000000071fdd
+ (id)log;	// IMP=0x0000000000071e81
- (void).cxx_destruct;	// IMP=0x00000000000722fa
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000072221
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000072140
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x0000000000071f5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

