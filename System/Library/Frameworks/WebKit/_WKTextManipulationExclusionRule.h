//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _WKTextManipulationExclusionRule : NSObject
{
    _Bool _isExclusion;	// 8 = 0x8
    struct RetainPtr<NSString> _elementName;	// 16 = 0x10
    struct RetainPtr<NSString> _attributeName;	// 24 = 0x18
    struct RetainPtr<NSString> _attributeValue;	// 32 = 0x20
    struct RetainPtr<NSString> _className;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x00000000002eb5d5
- (void).cxx_destruct;	// IMP=0x00000000002eb56b
@property(readonly, nonatomic) _Bool isExclusion; // @synthesize isExclusion=_isExclusion;
@property(readonly, nonatomic) NSString *className;
@property(readonly, nonatomic) NSString *attributeValue;
@property(readonly, nonatomic) NSString *attributeName;
@property(readonly, nonatomic) NSString *elementName;
- (id)initExclusion:(_Bool)arg1 forClass:(id)arg2;	// IMP=0x00000000002eb4cd
- (id)initExclusion:(_Bool)arg1 forAttribute:(id)arg2 value:(id)arg3;	// IMP=0x00000000002eb43a
- (id)initExclusion:(_Bool)arg1 forElement:(id)arg2;	// IMP=0x00000000002eb3cd

@end
