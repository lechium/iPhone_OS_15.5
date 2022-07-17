//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AIAudiogramAxis;

@interface AIAudiogramMap : NSObject
{
    AIAudiogramAxis *_frequencies;	// 8 = 0x8
    AIAudiogramAxis *_hearingLevels;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001da5b
@property(retain, nonatomic) AIAudiogramAxis *hearingLevels; // @synthesize hearingLevels=_hearingLevels;
@property(retain, nonatomic) AIAudiogramAxis *frequencies; // @synthesize frequencies=_frequencies;
- (id)description;	// IMP=0x000000000001d810
- (id)_valueOfPoint:(struct CGPoint)arg1 betweenObject:(id)arg2 andObject:(id)arg3 onAxis:(unsigned long long)arg4;	// IMP=0x000000000001d117
- (id)hearingLevelAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000001c904
- (id)frequencyAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000001c0ec
- (id)initWithFrequencies:(id)arg1 hearingLevels:(id)arg2;	// IMP=0x000000000001c04e

@end
