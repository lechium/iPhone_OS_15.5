//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLJournalEntryPayloadID-Protocol.h>

@class NSString;

@interface PLNSStringJournalEntryPayloadID : NSObject <PLJournalEntryPayloadID>
{
    NSString *_payloadID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003c9b9c
- (id)payloadUUIDData;	// IMP=0x00000000003c9b94
- (id)payloadIDString;	// IMP=0x00000000003c9b86
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003c9b65
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003c9afa
@property(readonly) unsigned long long hash;
- (id)initWithString:(id)arg1;	// IMP=0x00000000003c9a71

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
