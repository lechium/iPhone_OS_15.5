//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface TIWordSearchController : NSObject
{
    NSMapTable *_inputModeToWordSearchMapping;	// 8 = 0x8
}

+ (id)sharedWordSearchController;	// IMP=0x0000000000180672
- (void).cxx_destruct;	// IMP=0x0000000000180662
@property(retain, nonatomic) NSMapTable *inputModeToWordSearchMapping; // @synthesize inputModeToWordSearchMapping=_inputModeToWordSearchMapping;
- (id)wordSearchForInputMode:(id)arg1;	// IMP=0x0000000000180493
- (void)setWordSearch:(id)arg1 forInputMode:(id)arg2;	// IMP=0x00000000001803f9
- (id)init;	// IMP=0x0000000000180386

@end
