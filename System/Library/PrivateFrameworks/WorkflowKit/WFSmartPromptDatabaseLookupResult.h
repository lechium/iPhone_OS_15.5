//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WFSmartPromptDatabaseLookupResult : NSObject
{
    NSArray *_allowedStates;	// 8 = 0x8
    NSArray *_deniedStates;	// 16 = 0x10
    NSArray *_undefinedStates;	// 24 = 0x18
    NSArray *_restrictedStates;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000352f45
@property(readonly, nonatomic) NSArray *restrictedStates; // @synthesize restrictedStates=_restrictedStates;
@property(readonly, nonatomic) NSArray *undefinedStates; // @synthesize undefinedStates=_undefinedStates;
@property(readonly, nonatomic) NSArray *deniedStates; // @synthesize deniedStates=_deniedStates;
@property(readonly, nonatomic) NSArray *allowedStates; // @synthesize allowedStates=_allowedStates;
- (id)resultByAddingResult:(id)arg1;	// IMP=0x0000000000352d7b
- (id)initWithAllowedStates:(id)arg1 deniedStates:(id)arg2 undefinedStates:(id)arg3 restrictedStates:(id)arg4;	// IMP=0x0000000000352c89
- (id)initWithAllowedStates:(id)arg1 deniedStates:(id)arg2 undefinedStates:(id)arg3;	// IMP=0x0000000000352c70

@end

