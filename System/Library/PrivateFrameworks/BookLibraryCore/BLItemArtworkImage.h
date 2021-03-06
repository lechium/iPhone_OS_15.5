//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookLibraryCore/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString, NSURL;

@interface BLItemArtworkImage : NSObject <NSCopying>
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    NSString *_imageKind;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002b5a6
@property(copy, nonatomic) NSString *imageKind; // @synthesize imageKind=_imageKind;
- (void)_setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002b49c
@property(readonly, nonatomic) NSString *URLString;
- (void)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000002b471
@property(retain, nonatomic) NSURL *URL;
- (void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2;	// IMP=0x000000000002b2e7
@property(readonly, nonatomic) struct CGSize imageSize;
- (id)initWithArtworkDictionary:(id)arg1;	// IMP=0x000000000002b22b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002b172
- (unsigned long long)hash;	// IMP=0x000000000002b123
- (id)description;	// IMP=0x000000000002b021
- (id)valueForProperty:(id)arg1;	// IMP=0x000000000002b00b
- (long long)width;	// IMP=0x000000000002aeef
@property(readonly, nonatomic) double imageScale;
- (long long)height;	// IMP=0x000000000002adde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ad5a

@end

