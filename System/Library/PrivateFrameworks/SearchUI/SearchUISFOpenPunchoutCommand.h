//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFOpenPunchoutCommand;

@interface SearchUISFOpenPunchoutCommand
{
}

+ (_Bool)supportsRowModel:(id)arg1 environment:(id)arg2;	// IMP=0x00000000000b13e8
+ (id)commandForRowModel:(id)arg1 environment:(id)arg2;	// IMP=0x00000000000b1194
- (unsigned long long)destination;	// IMP=0x00000000000b15f5
- (_Bool)shouldDeselectPreviousSelection;	// IMP=0x00000000000b15ed
- (id)punchout;	// IMP=0x00000000000b1398
- (void)performCommandWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b1236

// Remaining properties
@property(readonly) SFOpenPunchoutCommand *command; // @dynamic command;

@end
