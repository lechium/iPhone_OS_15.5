//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFRequestAppClipInstallCommand;

@interface SearchUISFRequestAppClipInstallCommand
{
}

+ (_Bool)supportsRowModel:(id)arg1 environment:(id)arg2;	// IMP=0x0000000000078286
+ (id)commandForRowModel:(id)arg1 environment:(id)arg2;	// IMP=0x00000000000781c6
- (unsigned long long)destination;	// IMP=0x000000000007853b
- (void)performCommandWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000078494

// Remaining properties
@property(readonly, nonatomic) SFRequestAppClipInstallCommand *command; // @dynamic command;

@end

