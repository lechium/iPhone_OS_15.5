//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface OSAGPUEventReport
{
    NSDictionary *_event;	// 48 = 0x30
    NSString *_tailspinPath;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000331f6
- (void)generateLogAtLevel:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033161
- (id)appleCareDetails;	// IMP=0x0000000000033159
- (id)reportNamePrefix;	// IMP=0x00000000000330dc
- (id)problemType;	// IMP=0x00000000000330cf
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000032b90

@end

