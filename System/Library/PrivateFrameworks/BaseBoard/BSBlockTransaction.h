//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface BSBlockTransaction
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSString *_debugName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004d0de
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (id)_graphNodeDebugName;	// IMP=0x000000000004cf96
- (id)_descriptionProem;	// IMP=0x000000000004ce60
- (_Bool)_canBeInterrupted;	// IMP=0x000000000004ce58
- (void)_begin;	// IMP=0x000000000004cd78
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004cc51

@end

