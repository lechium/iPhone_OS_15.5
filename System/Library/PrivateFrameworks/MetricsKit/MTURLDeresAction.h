//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface MTURLDeresAction
{
    NSString *_scope;	// 8 = 0x8
    NSDictionary *_allowedParams;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000025b8f
@property(retain, nonatomic) NSDictionary *allowedParams; // @synthesize allowedParams=_allowedParams;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
- (id)allowedQueryItemsFromItems:(id)arg1;	// IMP=0x00000000000258c7
- (id)performAction:(id)arg1 context:(id)arg2;	// IMP=0x0000000000025591
- (id)initWithField:(id)arg1 configDictionary:(id)arg2;	// IMP=0x00000000000252b1

@end

