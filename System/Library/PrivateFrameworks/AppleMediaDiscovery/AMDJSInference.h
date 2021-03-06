//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AMDJSInference : NSObject
{
}

+ (void)appendInAppEventDataTo:(id)arg1 forDsId:(id)arg2 withInferencePayload:(id)arg3;	// IMP=0x0000000000040af0
+ (id)getDataForBizLogicForWorkflow:(id)arg1 useCaseId:(id)arg2 domainName:(id)arg3;	// IMP=0x0000000000040510
+ (id)getIdAndScoresFrom:(id)arg1 useCaseId:(id)arg2 summary:(id)arg3 bigGummary:(id)arg4 errorKey:(id)arg5;	// IMP=0x0000000000040060
+ (_Bool)persist:(id)arg1 withHandle:(id)arg2 domainName:(id)arg3 summary:(id)arg4;	// IMP=0x000000000003fbe0
+ (id)getPredictionForUseCase:(id)arg1 treatmentId:(id)arg2 UsingWorkflow:(id)arg3 domainName:(id)arg4 persistanceInfo:(id)arg5 summary:(id)arg6 bigSummary:(id)arg7 errorKey:(id)arg8;	// IMP=0x000000000003f4c0
+ (id)getWorkflowForUseCase:(id)arg1 treatmentId:(id)arg2 domain:(long long)arg3 summary:(id)arg4 bigSummary:(id)arg5 errorKey:(id)arg6;	// IMP=0x000000000003ebf0
+ (_Bool)areValidInputs:(id)arg1 domainOut:(long long *)arg2 useCaseIdsArray:(id)arg3 useCaseIdsSetOut:(id *)arg4 storeFrontIdString:(id)arg5 storeFrontIdOut:(id *)arg6 dsId:(id)arg7 error:(id *)arg8;	// IMP=0x000000000003e540
+ (id)runInference:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003d710

@end

