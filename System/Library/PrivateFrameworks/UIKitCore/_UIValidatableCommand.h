//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UICommand, UICommandAlternate;

__attribute__((visibility("hidden")))
@interface _UIValidatableCommand
{
    UICommand *_command;	// 80 = 0x50
    UICommandAlternate *_alternate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000fc49cc
- (void)useCommand:(id)arg1 alternate:(id)arg2;	// IMP=0x0000000000fc4878
- (id)init;	// IMP=0x0000000000fc4817
- (id)alternates;	// IMP=0x0000000000fc47fa
- (id)propertyList;	// IMP=0x0000000000fc47dd
- (SEL)action;	// IMP=0x0000000000fc479b

@end

