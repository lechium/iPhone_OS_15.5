//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>
#import <NotesShared/CREquatable-Protocol.h>

@class NSString;

@interface NSData (CRDT) <CRDataType, CREquatable, CRCoding>
- (id)tombstone;	// IMP=0x0000000000016b9e
- (void)realizeLocalChangesIn:(id)arg1;	// IMP=0x0000000000016b98
- (void)setDocument:(id)arg1;	// IMP=0x0000000000016b92
- (void)walkGraph:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016b8c
- (id)deltaSince:(id)arg1 in:(id)arg2;	// IMP=0x0000000000016b84
- (void)encodeWithCRCoder:(id)arg1;	// IMP=0x0000000000016b62
- (id)initWithCRCoder:(id)arg1;	// IMP=0x0000000000016b22
- (void)mergeWith:(id)arg1;	// IMP=0x0000000000016acb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
