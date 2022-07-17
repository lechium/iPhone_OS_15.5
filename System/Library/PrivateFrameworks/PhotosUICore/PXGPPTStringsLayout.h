//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGStringSource-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface PXGPPTStringsLayout <PXGStringSource>
{
    NSArray *_strings;	// 8 = 0x8
    NSDictionary *_attributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005bea73
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSArray *strings; // @synthesize strings=_strings;
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000005bea27
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000005bea1c
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000005bea0a
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000005be9ab
- (id)initWithStringCount:(unsigned long long)arg1 localeCodes:(id)arg2;	// IMP=0x00000000005be3e1
- (id)init;	// IMP=0x00000000005be3c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
