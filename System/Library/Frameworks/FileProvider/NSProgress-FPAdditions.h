//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProgress.h>

@interface NSProgress (FPAdditions)
- (void)fp_addChildProgress:(id)arg1 withUnitCount:(id)arg2;	// IMP=0x00000000000f4939
- (_Bool)fp_isOfFileOperationKind:(id)arg1 strict:(_Bool)arg2;	// IMP=0x00000000000f48bc
- (_Bool)fp_isOfFileOperationKind:(id)arg1;	// IMP=0x00000000000f48a5
- (void)fp_setFileOperationKind:(id)arg1;	// IMP=0x00000000000f4833
- (id)fp_fileOperationKind;	// IMP=0x00000000000f481c
- (id)fp_fileOperationKindStrict:(_Bool)arg1;	// IMP=0x00000000000f46f4
@end

