//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DMFSetDeclarationsRequest;

@interface DMDEngineSetDeclarationsOperation
{
    DMFSetDeclarationsRequest *_request;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004baf5
@property(retain, nonatomic) DMFSetDeclarationsRequest *request; // @synthesize request=_request;
- (void)performDatabaseModificationOperationWithManagedObjectContext:(id)arg1;	// IMP=0x001000000004b195

@end
