//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPModelKind, MPPropertySet, NSArray, NSString;

@interface MPModelRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_label;	// 8 = 0x8
    MPModelKind *_sectionKind;	// 16 = 0x10
    MPPropertySet *_sectionProperties;	// 24 = 0x18
    NSArray *_sectionSortDescriptors;	// 32 = 0x20
    MPModelKind *_itemKind;	// 40 = 0x28
    MPPropertySet *_itemProperties;	// 48 = 0x30
    NSArray *_itemSortDescriptors;	// 56 = 0x38
}

+ (id)preferredQueue;	// IMP=0x00000000000edccf
+ (_Bool)requiresNetwork;	// IMP=0x00000000000edcc7
+ (id)sharedNetworkQueue;	// IMP=0x00000000000edc97
+ (id)sharedQueue;	// IMP=0x00000000000edc67
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000edc5f
- (void).cxx_destruct;	// IMP=0x00000000000edbfa
@property(copy, nonatomic) NSArray *itemSortDescriptors; // @synthesize itemSortDescriptors=_itemSortDescriptors;
@property(copy, nonatomic) MPPropertySet *itemProperties; // @synthesize itemProperties=_itemProperties;
@property(retain, nonatomic) MPModelKind *itemKind; // @synthesize itemKind=_itemKind;
@property(copy, nonatomic) NSArray *sectionSortDescriptors; // @synthesize sectionSortDescriptors=_sectionSortDescriptors;
@property(copy, nonatomic) MPPropertySet *sectionProperties; // @synthesize sectionProperties=_sectionProperties;
@property(retain, nonatomic) MPModelKind *sectionKind; // @synthesize sectionKind=_sectionKind;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)_kindForClass:(Class)arg1;	// IMP=0x00000000000ed721
@property(retain, nonatomic) Class itemClass;
@property(retain, nonatomic) Class sectionClass;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ed41f
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ed38f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ed2e2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ed211
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ecf8d
- (id)description;	// IMP=0x00000000000ece06
- (id)debugDescription;	// IMP=0x00000000000ecc3e

@end

