//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKApplicationInfoServiceInterface-Protocol.h>

@class CRKValidXPCConnectionProvider;

@interface CRKApplicationInfoServiceProxy : NSObject <CRKApplicationInfoServiceInterface>
{
    CRKValidXPCConnectionProvider *_connectionProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000072540
@property(readonly, nonatomic) CRKValidXPCConnectionProvider *connectionProvider; // @synthesize connectionProvider=_connectionProvider;
- (void)_fetchApplicationWithDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007221b
- (void)fetchApplicationWithDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007210d
- (id)init;	// IMP=0x0000000000072087

@end

