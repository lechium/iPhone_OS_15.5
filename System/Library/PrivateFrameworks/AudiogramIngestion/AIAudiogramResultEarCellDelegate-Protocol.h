//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AudiogramIngestion/NSObject-Protocol.h>

@class NSNumber;

@protocol AIAudiogramResultEarCellDelegate <NSObject>
- (void)earCellDidEndEditingForFrequency:(NSNumber *)arg1 forEar:(long long)arg2;
- (void)earCellDidUpdateHearingLevel:(NSNumber *)arg1 forFrequency:(NSNumber *)arg2 forEar:(long long)arg3;
- (void)earCellDidBeginEditingForFrequency:(NSNumber *)arg1 forEar:(long long)arg2;
@end

