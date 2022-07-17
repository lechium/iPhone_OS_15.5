//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShazamKit/SHCustomCatalogStorage-Protocol.h>

@class NSArray, NSError, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SHCustomCatalogMemoryStorage : NSObject <SHCustomCatalogStorage>
{
    NSArray *_referenceSignatures;	// 8 = 0x8
    NSMutableDictionary *_signatures;	// 16 = 0x10
    NSMutableDictionary *_mediaItems;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001bf3b
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableDictionary *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) NSMutableDictionary *signatures; // @synthesize signatures=_signatures;
- (void)producedSignature:(id)arg1 forID:(id)arg2;	// IMP=0x000000000001bd90
- (void)producedMediaItem:(id)arg1 forID:(id)arg2;	// IMP=0x000000000001bc36
- (id)referenceSignatureForTrackID:(unsigned long long)arg1;	// IMP=0x000000000001bad7
- (void)addSignature:(id)arg1 representingMediaItems:(id)arg2;	// IMP=0x000000000001b8f1
- (id)jsonObjectRepresentation:(id *)arg1;	// IMP=0x000000000001b5ba
- (id)mediaItemsForReferenceSignature:(id)arg1;	// IMP=0x000000000001b500
@property(readonly, nonatomic) NSArray *referenceSignatures; // @synthesize referenceSignatures=_referenceSignatures;
- (id)init;	// IMP=0x000000000001b054

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
