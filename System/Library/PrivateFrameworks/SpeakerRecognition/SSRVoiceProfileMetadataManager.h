//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SSRVoiceProfileMetadataManager : NSObject
{
}

+ (id)recordedTimeStampFromFileName:(id)arg1;	// IMP=0x00000000000271cc
+ (id)recordedTimeStampOfFile:(id)arg1;	// IMP=0x0000000000026ece
+ (id)getUtteranceEnrollmentType:(id)arg1;	// IMP=0x0000000000026ba9
+ (_Bool)isUtteranceImplicitlyTrained:(id)arg1;	// IMP=0x00000000000269c6
+ (void)_writeMetaDict:(id)arg1 forUtterancePath:(id)arg2;	// IMP=0x0000000000026845
+ (id)_getBaseMetaDictionaryForUtterancePath:(id)arg1;	// IMP=0x00000000000266c5
+ (void)saveUtteranceMetadataForUtterance:(id)arg1 enrollmentType:(id)arg2 isHandheldEnrollment:(_Bool)arg3 triggerSource:(id)arg4 audioInput:(id)arg5 otherBiometricResult:(unsigned long long)arg6 containsPayload:(_Bool)arg7;	// IMP=0x0000000000026468

@end
