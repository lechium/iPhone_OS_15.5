//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface WFWorkflowDataRunDescriptor
{
    NSData *_workflowData;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000015cf1
- (void).cxx_destruct;	// IMP=0x0000000000015cde
@property(readonly, copy, nonatomic) NSData *workflowData; // @synthesize workflowData=_workflowData;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000015c54
- (id)description;	// IMP=0x0000000000015ba5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015b05
- (id)initWithWorkflowData:(id)arg1;	// IMP=0x00000000000159fb

@end

