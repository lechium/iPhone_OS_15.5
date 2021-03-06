//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INEnumerable-Protocol.h>
#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString, NSURL;

@interface INFile : NSObject <INEnumerable, INJSONSerializable, NSSecureCoding>
{
    NSData *_memoryMappedFileData;	// 8 = 0x8
    _Bool _deletesFileOnDeallocationIfNeeded;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
    NSString *_filename;	// 32 = 0x20
    NSURL *_fileURL;	// 40 = 0x28
    NSData *_bookmarkData;	// 48 = 0x30
    NSNumber *_removedOnCompletionValue;	// 56 = 0x38
    NSString *_typeIdentifier;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003fd3ad
+ (id)fileWithFileURL:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3;	// IMP=0x00000000003fd30e
+ (id)fileWithData:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3;	// IMP=0x00000000003fd26e
+ (void)initialize;	// IMP=0x00000000003fd22a
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000001d33a9
- (void).cxx_destruct;	// IMP=0x00000000003fcf7d
@property(readonly, copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(copy, nonatomic, setter=_setRemovedOnCompletionValue:) NSNumber *_removedOnCompletionValue; // @synthesize _removedOnCompletionValue;
@property(readonly, copy, nonatomic) NSData *_bookmarkData; // @synthesize _bookmarkData;
@property(nonatomic, setter=_setDeletesFileOnDeallocationIfNeeded:) _Bool _deletesFileOnDeallocationIfNeeded; // @synthesize _deletesFileOnDeallocationIfNeeded;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(nonatomic, setter=_setAssociatedAuditToken:) CDStruct_4c969caf _associatedAuditToken;
- (_Bool)_associatedAuditTokenIsEqualToAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x00000000003fcea8
@property(nonatomic, getter=_isMarkedForDeletionOnDeallocation, setter=_setMarkedForDeletionOnDeallocation:) _Bool _markedForDeletionOnDeallocation;
@property(readonly, nonatomic) _Bool _hasAssociatedAuditToken;
- (id)_dictionaryRepresentation;	// IMP=0x00000000003fcba0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003fcae3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003fc8c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003fc8be
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003fc7b8
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool _isFileURLBased;
- (void)dealloc;	// IMP=0x00000000003fc53b
- (id)_initWithBookmarkData:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3 removedOnCompletion:(id)arg4;	// IMP=0x00000000003fc41f
- (id)_initWithData:(id)arg1 filename:(id)arg2 fileURL:(id)arg3 typeIdentifier:(id)arg4 removedOnCompletion:(id)arg5;	// IMP=0x00000000003fc2ef
@property(nonatomic) _Bool removedOnCompletion;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000000896e2
- (_Bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000161ac2
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000001d30fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

