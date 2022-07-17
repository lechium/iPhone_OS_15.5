//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShazamKit/SHJSONLDataDetokenizerDelegate-Protocol.h>

@class NSDictionary, NSError, NSString;
@protocol SHJSONLCustomCatalogTransformerDelegate;

__attribute__((visibility("hidden")))
@interface SHJSONLCustomCatalogTransformer : NSObject <SHJSONLDataDetokenizerDelegate>
{
    id <SHJSONLCustomCatalogTransformerDelegate> _delegate;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSDictionary *_header;	// 24 = 0x18
}

+ (id)outputFileHeader;	// IMP=0x000000000000df69
+ (id)catalogFileRepresentationOfMediaItems:(id)arg1 withID:(id)arg2;	// IMP=0x000000000000dc7e
+ (id)catalogFileRepresentationOfSignature:(id)arg1 withID:(id)arg2;	// IMP=0x000000000000db6c
+ (id)signatureFromFileRow:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000da82
+ (id)mediaItemFromFileRow:(id)arg1;	// IMP=0x000000000000da21
+ (id)headerFromFileRow:(id)arg1;	// IMP=0x000000000000da0b
+ (id)IDFromFileRow:(id)arg1;	// IMP=0x000000000000d9ef
+ (_Bool)objectIsSignature:(id)arg1;	// IMP=0x000000000000d8f2
+ (_Bool)objectIsMediaItem:(id)arg1;	// IMP=0x000000000000d7f5
+ (_Bool)objectIsHeader:(id)arg1;	// IMP=0x000000000000d6f8
- (void).cxx_destruct;	// IMP=0x000000000000e068
@property(retain, nonatomic) NSDictionary *header; // @synthesize header=_header;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <SHJSONLCustomCatalogTransformerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)parsedJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d3e3
- (void)reset;	// IMP=0x000000000000d3b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
