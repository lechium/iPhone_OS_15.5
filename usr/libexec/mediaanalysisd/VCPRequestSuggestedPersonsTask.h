//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface VCPRequestSuggestedPersonsTask : NSObject
{
    struct atomic<bool> _started;	// 8 = 0x8
    struct atomic<bool> _cancel;	// 9 = 0x9
    NSString *_personLocalIdentifier;	// 16 = 0x10
    NSArray *_toBeConfirmedPersonSuggestions;	// 24 = 0x18
    NSArray *_toBeRejectedPersonSuggestions;	// 32 = 0x20
    NSURL *_photoLibraryURL;	// 40 = 0x28
    CDUnknownBlockType _progressHandler;	// 48 = 0x30
    CDUnknownBlockType _reply;	// 56 = 0x38
    CDUnknownBlockType _cancelBlock;	// 64 = 0x40
}

+ (id)taskWithPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 andPhotoLibraryURL:(id)arg4 andProgressHandler:(CDUnknownBlockType)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0020000000090c39
- (void).cxx_destruct;	// IMP=0x002000000009128a
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (_Bool)autoCancellable;	// IMP=0x0010000000091269
- (int)run;	// IMP=0x0010000000090f63
- (_Bool)isCanceled;	// IMP=0x0010000000090f44
- (void)cancel;	// IMP=0x0010000000090f39
- (float)resourceRequirement;	// IMP=0x0010000000090f2b
- (void)dealloc;	// IMP=0x0010000000090d4e
- (id)initWithPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 andPhotoLibraryURL:(id)arg4 andProgressHandler:(CDUnknownBlockType)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000090b00

@end
