//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Trial/TRILogTreatmentReader.h>

@interface TRILogTreatmentProvider : TRILogTreatmentReader
{
}

+ (_Bool)deleteFileAtPath:(id)arg1;	// IMP=0x0000000000027dd1
+ (id)providerWithProjectId:(int)arg1 paths:(id)arg2;	// IMP=0x0000000000027d68
- (void)updatePersistedLogNamespace:(id)arg1;	// IMP=0x00000000000286bd
- (void)removeTreatment:(id)arg1;	// IMP=0x0000000000028433
- (_Bool)addTreatment:(id)arg1;	// IMP=0x000000000002819c
- (_Bool)saveTreatments:(id)arg1;	// IMP=0x0000000000027ec7

@end
