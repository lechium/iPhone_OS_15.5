//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFImageConvertAction : WFAction
{
}

+ (_Bool)outputIsExemptFromTaintTrackingInheritance;	// IMP=0x0000000000260fba
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x0000000000261260
- (_Bool)preserveMetadataWithPreserveMetadata:(_Bool)arg1 imageFormat:(id)arg2;	// IMP=0x00000000002611bd
- (id)imageQualityWithQuality:(id)arg1 imageFormat:(id)arg2;	// IMP=0x0000000000261127
- (id)typeFromImageFormatString:(id)arg1;	// IMP=0x0000000000260fc2

@end

