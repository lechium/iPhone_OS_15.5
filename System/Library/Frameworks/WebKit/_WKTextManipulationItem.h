//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _WKTextManipulationItem : NSObject
{
    struct RetainPtr<NSString> _identifier;	// 8 = 0x8
    struct RetainPtr<NSArray<_WKTextManipulationToken *>> _tokens;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00000000002ebb5c
- (void).cxx_destruct;	// IMP=0x00000000002ebb1e
- (id)_descriptionPreservingPrivacy:(_Bool)arg1;	// IMP=0x00000000002eb9cb
@property(readonly, copy, nonatomic) NSString *debugDescription;
- (id)description;	// IMP=0x00000000002eb9a0
- (_Bool)isEqualToTextManipulationItem:(id)arg1 includingContentEquality:(_Bool)arg2;	// IMP=0x00000000002eb6d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002eb685
@property(readonly, copy, nonatomic) NSArray *tokens;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithIdentifier:(id)arg1 tokens:(id)arg2;	// IMP=0x00000000002eb5e9

@end

