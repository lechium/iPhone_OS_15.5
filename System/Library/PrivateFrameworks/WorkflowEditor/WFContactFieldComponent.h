//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol WFComponentNavigationContext;

@interface WFContactFieldComponent
{
    CDUnknownBlockType _updateBlock;	// 8 = 0x8
    CDUnknownBlockType _variableBlock;	// 16 = 0x10
    id <WFComponentNavigationContext> _navigationContext;	// 24 = 0x18
    struct WFContactFieldAttributes _attributes;	// 32 = 0x20
}

+ (id)newWithAttributes:(const struct WFContactFieldAttributes *)arg1 updateBlock:(CDUnknownBlockType)arg2 variableBlock:(CDUnknownBlockType)arg3 navigationContext:(id)arg4 size:(const struct CKComponentSize *)arg5;	// IMP=0x00000000002f9810
- (id).cxx_construct;	// IMP=0x00000000002f9bc7
- (void).cxx_destruct;	// IMP=0x00000000002f9b30
@property(readonly, nonatomic) __weak id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(readonly, nonatomic) CDUnknownBlockType variableBlock; // @synthesize variableBlock=_variableBlock;
@property(readonly, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(readonly, nonatomic) struct WFContactFieldAttributes attributes; // @synthesize attributes=_attributes;

@end
