//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AUAudioUnit, NSString;

@interface AVAudioUnit
{
}

+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c5b2c
- (float)valueForParam:(unsigned int)arg1;	// IMP=0x00000000000c5a98
- (_Bool)setValue:(float)arg1 forParam:(unsigned int)arg2;	// IMP=0x00000000000c5a13
@property(readonly, nonatomic) unsigned long long version;
@property(readonly, nonatomic) NSString *manufacturerName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) struct AudioComponentDescription audioComponentDescription;
@property(readonly, nonatomic) struct OpaqueAudioComponentInstance *audioUnit;
- (_Bool)loadAudioUnitPresetAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c55b7
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription)arg1;	// IMP=0x00000000000c555b

// Remaining properties
@property(readonly, nonatomic) AUAudioUnit *AUAudioUnit; // @dynamic AUAudioUnit;

@end

