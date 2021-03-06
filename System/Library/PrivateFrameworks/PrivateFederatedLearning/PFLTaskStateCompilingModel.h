//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PrivateFederatedLearning/PFLTaskState-Protocol.h>

@class NSURL;

@interface PFLTaskStateCompilingModel : NSObject <PFLTaskState>
{
    NSURL *_modelURL;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000015939
- (void).cxx_destruct;	// IMP=0x000000000001600d
@property(readonly, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (void)suspend;	// IMP=0x0000000000015ffd
- (void)resume:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015ab6
- (id)initWithModelURL:(id)arg1;	// IMP=0x0000000000015a4b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000159ba
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000015941
- (unsigned long long)tag;	// IMP=0x000000000001592e

@end

