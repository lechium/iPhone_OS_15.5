//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSURL;

@interface MSVArtworkServiceResizeRequest
{
    NSURL *_sourceURL;	// 8 = 0x8
    NSMutableArray *_resizeDestinations;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000043573
- (void).cxx_destruct;	// IMP=0x0000000000043530
@property(retain, nonatomic) NSMutableArray *resizeDestinations; // @synthesize resizeDestinations=_resizeDestinations;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (id)debugDescription;	// IMP=0x0000000000043433
- (Class)operationClass;	// IMP=0x0000000000043422
- (void)enumerateDestinationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000432ff
- (void)addJPEGDestinationWithSize:(struct CGSize)arg1 compressionQuality:(double)arg2 url:(id)arg3;	// IMP=0x000000000004322a
- (void)addDestinationWithFormat:(long long)arg1 size:(struct CGSize)arg2 url:(id)arg3;	// IMP=0x0000000000043159
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000043085
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000042f53
- (id)initWithSourceURL:(id)arg1;	// IMP=0x0000000000042e98

@end
