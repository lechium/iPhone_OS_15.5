//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;

@interface CPLTransportUpdateScopeTask
{
    id <CPLEngineTransportDeleteTransportScopeTask> _deleteTask;	// 8 = 0x8
    id <CPLEngineTransportUpdateTransportScopeTask> _updateTask;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002710c
- (id)taskIdentifier;	// IMP=0x00000000000270ff
- (void)cancel;	// IMP=0x0000000000027058
- (void)launch;	// IMP=0x0000000000026f20
- (_Bool)checkScopeIsValidInTransaction:(id)arg1;	// IMP=0x0000000000026da3

@end
