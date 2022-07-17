//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUPickerFilter-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUPickerAssetMediaTypeFilter : NSObject <PUPickerFilter>
{
    long long _mediaType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000211e33
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000211d99
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000211cc2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000211c76
- (unsigned long long)generatedRequiredAssetTypes;	// IMP=0x0000000000211c6e
- (unsigned long long)generatedPossibleAssetTypes;	// IMP=0x0000000000211c3f
- (id)generatedAssetPredicate;	// IMP=0x0000000000211bf1
@property(readonly, nonatomic) _Bool allowsAlbums;
@property(readonly, nonatomic) _Bool allowsSearch;
@property(readonly, nonatomic) _Bool isValidFilter;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002118f1
- (id)initWithMediaType:(long long)arg1;	// IMP=0x0000000000211880

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
