//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface WFWorkflowContextualActionOutputRunResult
{
    NSArray *_files;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000026a3
- (void).cxx_destruct;	// IMP=0x0000000000002690
@property(readonly, nonatomic) NSArray *files; // @synthesize files=_files;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000025e4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000024df
- (id)initWithFiles:(id)arg1 runError:(id)arg2;	// IMP=0x0000000000002454
- (id)initWithFiles:(id)arg1;	// IMP=0x0000000000002440

@end
