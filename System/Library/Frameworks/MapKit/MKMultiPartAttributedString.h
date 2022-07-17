//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>

@class NSArray, NSAttributedString;

@interface MKMultiPartAttributedString : NSObject <NSCopying>
{
    NSAttributedString *_attributedString;	// 8 = 0x8
    NSArray *_components;	// 16 = 0x10
    NSArray *_separators;	// 24 = 0x18
}

+ (id)multiPartAttributedStringWithString:(id)arg1;	// IMP=0x0000000000037132
+ (id)multiPartAttributedStringWithComponents:(id)arg1 repeatedSeparator:(id)arg2;	// IMP=0x0000000000037049
+ (id)_mapkit_multiPartAttributedStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2;	// IMP=0x0000000000267a18
- (void).cxx_destruct;	// IMP=0x0000000000037016
@property(readonly, copy, nonatomic) NSArray *separators; // @synthesize separators=_separators;
@property(readonly, copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)debugDescription;	// IMP=0x0000000000036f8e
@property(readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)description;	// IMP=0x0000000000036c29
- (unsigned long long)hash;	// IMP=0x0000000000036b9c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003695b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000036927
- (id)initWithComponents:(id)arg1 separators:(id)arg2;	// IMP=0x000000000003686e

@end
