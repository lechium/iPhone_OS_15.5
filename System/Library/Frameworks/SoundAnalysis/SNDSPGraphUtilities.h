//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNDSPGraphUtilities : NSObject
{
}

+ (_Bool)stopInjectingBoxesInGraph:(id)arg1;	// IMP=0x000000000006cb9f
+ (_Bool)startInjectingBoxes:(id)arg1 inGraph:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006c6f1
+ (_Bool)stopRecordingBoxesInGraph:(id)arg1;	// IMP=0x000000000006c4f9
+ (_Bool)startRecordingWithBoxRecordingInfos:(id)arg1 inGraph:(id)arg2 toDirectory:(id)arg3 error:(id *)arg4;	// IMP=0x000000000006bfd2
+ (_Bool)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 toDirectory:(id)arg3 error:(id *)arg4;	// IMP=0x000000000006b9c9
+ (_Bool)startRecordingFirstBoxInGraph:(id)arg1 toDirectory:(id)arg2 withFileName:(id)arg3 error:(id *)arg4;	// IMP=0x000000000006b768

@end

